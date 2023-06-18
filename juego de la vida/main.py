import pygame

pygame.init()
width, height = 1000,1000
screen = pygame.display.set_mode((width, height))
bg= 25,25,25
screen.fill(bg)

nxC, nyC=25,25

dimCW= width/nxC
dimCH= height/nyC

while True:
    for y in (0,nxC):
        for x in (0, nyC):
            poly = [((x)*dimCW,y*dimCH),
                    ((x+1)*dimCW,y*dimCH),
                    ((x+1)*dimCW,(y+1)*dimCH),
                    ((x)*dimCW,(y+1)*dimCH),]
            pygame.draw.polygon(screen,(128,128,128), poly,1)
    pygame.display.flip()