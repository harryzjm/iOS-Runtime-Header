//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPerson.h>

@interface INPerson (IMAssistantCore)
+ (id)__im_personFromSPIHandle:(id)arg1 contact:(id)arg2;
+ (id)__im_assistant_displayNameForContact:(id)arg1 displayFormattedHandle:(id)arg2 normalizedHandle:(id)arg3;
- (id)__im_assistant_allContactIdentifiers;
- (id)__im_assistant_initAnonymousRecipientWithIMHandle:(id)arg1;
- (id)__im_assistant_initWithContact:(id)arg1 displayFormattedHandle:(id)arg2 normalizedHandle:(id)arg3 type:(long long)arg4 label:(id)arg5;
- (id)__im_assistant_initForContactResolutionResultWithContact:(id)arg1 type:(long long)arg2 label:(id)arg3;
- (id)__im_assistant_initWithContact:(id)arg1 imHandle:(id)arg2 type:(long long)arg3 label:(id)arg4;
- (id)__im_assistant_initWithContact:(id)arg1 imHandle:(id)arg2;
- (id)__im_assistant_initWithContact:(id)arg1 unformattedPersonHandle:(id)arg2 accountDataSource:(id)arg3;
- (id)__im_assistant_initWithHandleFromContact:(id)arg1 accountDataSource:(id)arg2;
@end

