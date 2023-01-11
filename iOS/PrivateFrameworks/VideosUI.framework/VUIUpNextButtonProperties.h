//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VUIButton, VUIUpNextStateView;
@protocol VUIUpNextButtonProtocol;

__attribute__((visibility("hidden")))
@interface VUIUpNextButtonProperties : NSObject
{
    _Bool _isWatchListed;
    _Bool _dismissOnSelect;
    _Bool _confirmationShouldWaitCompletion;
    VUIUpNextStateView *_addedStateView;
    VUIUpNextStateView *_removedStateView;
    VUIButton<VUIUpNextButtonProtocol> *_delegate;
    NSString *_canonicalID;
}

+ (id)configureWithElement:(id)arg1 existingButton:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool confirmationShouldWaitCompletion; // @synthesize confirmationShouldWaitCompletion=_confirmationShouldWaitCompletion;
@property(nonatomic) _Bool dismissOnSelect; // @synthesize dismissOnSelect=_dismissOnSelect;
@property(nonatomic) _Bool isWatchListed; // @synthesize isWatchListed=_isWatchListed;
@property(retain, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(nonatomic) __weak VUIButton<VUIUpNextButtonProtocol> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VUIUpNextStateView *removedStateView; // @synthesize removedStateView=_removedStateView;
@property(readonly, nonatomic) VUIUpNextStateView *addedStateView; // @synthesize addedStateView=_addedStateView;
- (void)_errorInUpdatingState:(id)arg1;
- (void)dealloc;
- (void)updateButtonContentView;
- (void)callAPIAndToggleUpNextState;
- (void)_toggleUpNextState;
- (void)setupNotificationObserver;
- (id)init;

@end
