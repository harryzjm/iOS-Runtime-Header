//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HFDemoModeFaceRecognitionDataSource : NSObject
{
    NSArray *_recentsEntries;
    NSArray *_knownToHouseholdEntries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *knownToHouseholdEntries; // @synthesize knownToHouseholdEntries=_knownToHouseholdEntries;
@property(retain, nonatomic) NSArray *recentsEntries; // @synthesize recentsEntries=_recentsEntries;
- (id)arrayFromPlistArray:(id)arg1;
- (id)init;

@end
