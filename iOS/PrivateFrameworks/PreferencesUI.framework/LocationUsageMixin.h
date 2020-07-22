//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, UIImageView;

@interface LocationUsageMixin : NSObject
{
    int _usage;
    unsigned long long _authLevel;
    UIImageView *_usageIndicator;
    NSString *_authLevelString;
}

@property(readonly, nonatomic) NSString *authLevelString; // @synthesize authLevelString=_authLevelString;
@property(readonly, nonatomic) UIImageView *usageIndicator; // @synthesize usageIndicator=_usageIndicator;
@property(nonatomic) unsigned long long authLevel; // @synthesize authLevel=_authLevel;
@property(nonatomic) int usage; // @synthesize usage=_usage;
- (void).cxx_destruct;
- (id)_authLevelForMask:(unsigned long long)arg1;
- (struct CGSize)_authLevelLabelSize:(unsigned long long)arg1;
- (struct CGSize)usageIndicatorSize;
- (id)iconNameForUsage:(int)arg1;
- (id)init;

@end
