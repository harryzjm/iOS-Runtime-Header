//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIPeopleGroup : NSObject
{
    NSString *_name;
    NSString *_identifier;
    NSString *_sourceKind;
}

+ (id)peopleGroupWithName:(id)arg1 identifier:(id)arg2 sourceKind:(id)arg3;
@property(copy, nonatomic) NSString *sourceKind; // @synthesize sourceKind=_sourceKind;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end
