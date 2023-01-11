//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface BMItemMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) long long absoluteSupport; // @dynamic absoluteSupport;
@property(retain, nonatomic) NSSet *antecedentOfRules; // @dynamic antecedentOfRules;
@property(retain, nonatomic) NSSet *consequentOfRules; // @dynamic consequentOfRules;
@property(copy, nonatomic) NSString *normalizedValue; // @dynamic normalizedValue;
@property(copy, nonatomic) NSString *typeIdentifier; // @dynamic typeIdentifier;
@property(copy, nonatomic) NSString *uniformIdentifier; // @dynamic uniformIdentifier;

@end
