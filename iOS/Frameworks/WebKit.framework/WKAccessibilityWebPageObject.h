//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface WKAccessibilityWebPageObject
{
    NSData *_remoteTokenData;
}

@property(retain, nonatomic) NSData *remoteTokenData; // @synthesize remoteTokenData=_remoteTokenData;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (double)pageScale;
- (void)_accessibilityCategoryInstalled:(id)arg1;
- (void)dealloc;
- (id)init;

@end

