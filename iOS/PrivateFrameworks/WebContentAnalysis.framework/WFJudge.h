//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class WFLSMMap;

__attribute__((visibility("hidden")))
@interface WFJudge : NSObject
{
    WFLSMMap *map;
}

+ (id)defaultJudge;
+ (id)defaultLSMMapPath;
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id *)arg4 pageTitle:(id *)arg5;
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id *)arg3 pageTitle:(id *)arg4;
- (id)_pronounceOnWebpage:(id)arg1;
- (id)pronounceOnWebpage:(id)arg1;
- (id)initWithMap:(id)arg1;

@end

