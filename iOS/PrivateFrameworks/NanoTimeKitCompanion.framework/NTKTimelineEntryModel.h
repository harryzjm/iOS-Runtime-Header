//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface NTKTimelineEntryModel : NSObject
{
    NSDate *_entryDate;
}

@property(retain, nonatomic) NSDate *entryDate; // @synthesize entryDate=_entryDate;
- (void).cxx_destruct;
- (id)entryForComplicationFamily:(long long)arg1;
- (id)templateForComplicationFamily:(long long)arg1;

@end

