//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FTRegion : NSObject
{
    NSDictionary *_dictionary;
    NSArray *_subRegions;
    FTRegion *_parentRegion;
}

@property(retain) FTRegion *_parentRegion; // @synthesize _parentRegion;
@property(retain) NSDictionary *_dictionary; // @synthesize _dictionary;
- (void).cxx_destruct;
- (id)description;
@property(readonly) NSString *regionID;
@property(readonly) NSString *basePhoneNumber;
@property(readonly) NSString *label;
@property(readonly) NSString *isoCode;
- (id)regionWithID:(id)arg1;
@property(readonly) NSArray *subRegions; // @synthesize subRegions=_subRegions;
@property(readonly) FTRegion *parentRegion;
- (void)_setParentRegion:(id)arg1;
- (void)dealloc;
- (id)_initWithDictionary:(id)arg1;

@end

