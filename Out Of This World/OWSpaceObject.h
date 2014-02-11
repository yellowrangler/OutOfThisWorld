//
//  OWSpaceObject.h
//  Out Of This World
//
//  Created by Tarrant Cutler on 2/11/14.
//  Copyright (c) 2014 Tarrant Cutler. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OWSpaceObject : NSObject

@property (strong, nonatomic) NSString *name;
@property (nonatomic) float gravitationalForce;
@property (nonatomic) float diameter;
@property (nonatomic) float yearLength;
@property (nonatomic) float dayLength;
@property (nonatomic) float temperature;
@property (nonatomic) int numberOfMoons;
@property (strong, nonatomic) NSString *nickname;
@property (strong, nonatomic) NSString *interestingFact;

@property (strong, nonatomic) UIImage *spaceImage;

-(id)initWithData:(NSDictionary *)data andImage:(UIImage *)image;

@end
