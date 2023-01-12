//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AATrustedContactDetailsViewModel : NSObject
{
    _Bool _primaryActionRequiresAuth;
    _Bool _destructiveActionRequiresAuth;
    NSString *_title;
    NSString *_detailsLabel;
    NSString *_detailsSubtitle;
    NSString *_primaryActionText;
    NSString *_secondaryActionText;
    NSString *_destructiveActionText;
    NSString *_destructiveActionSheetTitle;
    NSString *_destructiveActionSheetDetails;
    NSString *_destructiveActionSheetCancelText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool destructiveActionRequiresAuth; // @synthesize destructiveActionRequiresAuth=_destructiveActionRequiresAuth;
@property(nonatomic) _Bool primaryActionRequiresAuth; // @synthesize primaryActionRequiresAuth=_primaryActionRequiresAuth;
@property(copy, nonatomic) NSString *destructiveActionSheetCancelText; // @synthesize destructiveActionSheetCancelText=_destructiveActionSheetCancelText;
@property(copy, nonatomic) NSString *destructiveActionSheetDetails; // @synthesize destructiveActionSheetDetails=_destructiveActionSheetDetails;
@property(copy, nonatomic) NSString *destructiveActionSheetTitle; // @synthesize destructiveActionSheetTitle=_destructiveActionSheetTitle;
@property(copy, nonatomic) NSString *destructiveActionText; // @synthesize destructiveActionText=_destructiveActionText;
@property(copy, nonatomic) NSString *secondaryActionText; // @synthesize secondaryActionText=_secondaryActionText;
@property(copy, nonatomic) NSString *primaryActionText; // @synthesize primaryActionText=_primaryActionText;
@property(copy, nonatomic) NSString *detailsSubtitle; // @synthesize detailsSubtitle=_detailsSubtitle;
@property(copy, nonatomic) NSString *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
