//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class IMBalloonPluginDataSource, NSArray, NSString;
@protocol CKPluginEntryViewControllerDelegate, UICoordinateSpace;

@protocol CKPluginEntryViewController <NSObject>
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@optional
@property(readonly) _Bool loadedContentView;
@property(readonly) _Bool wantsEdgeToEdgeLayout;
@property(readonly) _Bool wantsClearButton;
- (NSArray *)framesOfVisibleContentViewInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (void)performHostAppSuspend;
- (void)performHostAppResume;
- (void)didFinishAnimatedBoundsChange;
- (void)willAnimateBoundsChange;
- (void)payloadWillSave;
- (void)payloadWillClear;
- (NSString *)payloadBundleID;
- (void)payloadWillSend;
- (id)initWithDataSource:(IMBalloonPluginDataSource *)arg1 entryViewDelegate:(id <CKPluginEntryViewControllerDelegate>)arg2;
@end

