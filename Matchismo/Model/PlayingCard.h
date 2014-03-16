//
//  PlayingCard.h
//  Matchismo
//
//  Created by Alejandro Machado on 14/3/16.
//  Copyright (c) 2014 M-ITI. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
