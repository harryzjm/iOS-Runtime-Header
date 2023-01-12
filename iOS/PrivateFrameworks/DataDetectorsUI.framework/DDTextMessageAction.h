//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDTelephoneNumberAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DDTextMessageAction : DDTelephoneNumberAction
{
}

+ (id)matchingScheme;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)viewController;
- (_Bool)canBePerformedByOpeningURL;
- (void)performFromView:(id)arg1;
- (id)notificationURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (int)interactionType;
- (_Bool)prefersOpenToCreate;
- (id)iconName;
- (id)subtitle;
- (id)localizedName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

