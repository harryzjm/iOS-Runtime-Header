//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject
{
    SGMFoundInAppsICS *_foundInAppsICS;
}

+ (void)recordWithTimezoneValue:(struct SGMFoundInAppsICSTZValue_)arg1 datetimeType:(struct SGMFoundInAppsDatetimeType_)arg2;
+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) SGMFoundInAppsICS *foundInAppsICS; // @synthesize foundInAppsICS=_foundInAppsICS;
- (id)init;

@end
