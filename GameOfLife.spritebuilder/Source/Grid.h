//
//  Grid.h
//  GameOfLife
//
//  Created by Tripp Guinn on 6/18/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;
@property (nonatomic, assign) int countNeighbors;
@end
