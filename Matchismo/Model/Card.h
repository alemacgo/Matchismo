//
//  Card.h
//  Matchismo
//
//  Created by Alejandro Machado on 14/3/16.
//  Copyright (c) 2014 M-ITI. All rights reserved.
//

@import Foundation;

@interface Card : NSObject
// Public API

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;
- (int)match:(NSArray *)otherCards;

@end
