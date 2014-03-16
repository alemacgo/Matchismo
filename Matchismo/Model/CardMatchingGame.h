//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Alejandro Machado on 14/3/16.
//  Copyright (c) 2014 M-ITI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

// designated initializer
-(instancetype)initWithCardCount:(NSUInteger) count usingDeck:(Deck*) deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card*) cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end
