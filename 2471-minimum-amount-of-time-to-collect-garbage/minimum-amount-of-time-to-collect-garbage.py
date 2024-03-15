class Solution:
    def garbageCollection(self, gr: List[str], travel: List[int]) -> int:
        m = 0
        p = 0
        g = 0
        mc = 0
        pc = 0
        gc = 0

        for i in range(len(gr)):
            if i > 0:
                mc += travel[i - 1]
                pc += travel[i - 1]
                gc += travel[i - 1]

            if gr[i].count('G') > 0:
                g += gr[i].count('G') + gc
                gc = 0

            if gr[i].count('P') > 0:
                p += gr[i].count('P') + pc
                pc = 0

            if gr[i].count('M') > 0:
                m += gr[i].count('M') + mc
                mc = 0

        return g + p + m