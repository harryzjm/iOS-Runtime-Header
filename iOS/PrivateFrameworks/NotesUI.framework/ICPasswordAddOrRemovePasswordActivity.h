//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICNote, UIWindow;

@interface ICPasswordAddOrRemovePasswordActivity
{
    ICNote *_note;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _willPerformActivityBlock;
    UIWindow *_displayWindow;
}

+ (long long)activityCategory;
- (void).cxx_destruct;
@property(nonatomic) __weak UIWindow *displayWindow; // @synthesize displayWindow=_displayWindow;
@property(copy, nonatomic) CDUnknownBlockType willPerformActivityBlock; // @synthesize willPerformActivityBlock=_willPerformActivityBlock;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
- (void)accessibilityAnnounceAddOrRemovePasswordWithIntent:(unsigned long long)arg1 withNote:(id)arg2;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (void)performActivity;
- (id)initWithNote:(id)arg1 displayWindow:(id)arg2 willPerformActivityBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
