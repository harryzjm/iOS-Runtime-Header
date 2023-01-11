//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion, WFImage;

@interface WFDailyRoutineShortcutSetupActionsQuestion
{
    NSArray *_actions;
    NSString *_addButtonTitle;
    NSString *_skipButtonTitle;
    WFImage *_icon;
    WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *_followUpQuestion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *followUpQuestion; // @synthesize followUpQuestion=_followUpQuestion;
@property(retain, nonatomic) WFImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *skipButtonTitle; // @synthesize skipButtonTitle=_skipButtonTitle;
@property(copy, nonatomic) NSString *addButtonTitle; // @synthesize addButtonTitle=_addButtonTitle;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (id)initWithPrompt:(id)arg1 subtitle:(id)arg2 actions:(id)arg3;

@end
