//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PreferencesUI/NSObject-Protocol.h>

@protocol SBSHardwareButtonEventConsuming <NSObject>

@optional
- (void)consumeAnyPressEventForButtonKind:(long long)arg1;
- (void)consumeLongPressForButtonKind:(long long)arg1;
- (void)consumeTriplePressUpForButtonKind:(long long)arg1;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)consumeDoublePressDownForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
@end

