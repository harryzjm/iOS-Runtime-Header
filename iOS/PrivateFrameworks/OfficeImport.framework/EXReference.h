//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXReference : NSObject
{
}

+ (id)xmlRangesFromDiscontinuousReferences:(id)arg1;
+ (id)edDiscontinousReferencesFromXmlRanges:(id)arg1;
+ (id)edReferenceFromXmlReference:(id)arg1;
+ (id)xmlReferenceFromEDReference:(id)arg1;
+ (id)xmlReferenceFromAreaReference:(struct EDAreaReference *)arg1;
+ (_Bool)edAreaReferenceFromXmlReference:(id)arg1 areaReference:(struct EDAreaReference *)arg2;
+ (id)numberToStringBase26:(int)arg1;

@end

