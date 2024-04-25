// Código copiado diretamente do @danielsource... Irei modificar algumas coisas depois para facilitar na memorização. (TÔ COM SONO AAAAA)
#include <stdio.h>

#define CLUB_GRE 1 // Grêmio
#define CLUB_INT 2 // Internacional
#define CLUB_OUT 3 // Outros

#define CID_PAL 0 // Porto Alegre
#define CID_OUT 1 // Outras

int main(void)
{
    int n = 0, pa_out = 0;
    float m_gre = 0, m_int = 0;
    int torc_gre = 0, torc_int = 0, torc_out = 0;

    printf("Entrevistados: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        int club, cid;
        float sal;
        scanf("%d %f %d", &club, &sal, &cid);
        if (club == CLUB_GRE)
        {
            ++torc_gre;
            m_gre += sal;
        }
        else if (club == CLUB_INT)
        {
            ++torc_int;
            m_int += sal;
        }
        else if (club == CLUB_OUT)
        {
            ++torc_out;
            if (cid == CID_PAL)
                ++pa_out;
        }
    }

    if (m_gre > 0)
        m_gre /= torc_gre;
    if (m_int > 0)
        m_int /= torc_int;

    printf("Torcedores: %d %d %d\n", torc_gre, torc_int, torc_out);
    printf("Média salarial: %f %f\n", m_gre, m_int);
    printf("Porto Alegre outros: %d\n", pa_out);
    printf("Entrevistados: %d\n", n);
    return 0;
}