//
//  Deck.h
//  Matchismo
//
//  Created by Alejandro Machado on 14/3/16.
//  Copyright (c) 2014 M-ITI. All rights reserved.
//

@import Foundation;
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card;
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
// This is how we add an "optional argument"

- (Card *)drawRandomCard;

@end
