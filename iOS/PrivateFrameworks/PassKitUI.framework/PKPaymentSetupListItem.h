//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/NSCopying-Protocol.h>
#import <PassKitUI/PKIdentifiable-Protocol.h>

@class NSString, UIImage;

@interface PKPaymentSetupListItem : NSObject <NSCopying, PKIdentifiable>
{
    _Bool _displayInfo;
    _Bool _displayChevron;
    _Bool _loadingIndicatorVisible;
    _Bool _selected;
    _Bool _reserverSpaceForSelectedAccessory;
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_icon;
    NSString *_badgeText;
    NSString *_labelText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(retain, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(nonatomic) _Bool reserverSpaceForSelectedAccessory; // @synthesize reserverSpaceForSelectedAccessory=_reserverSpaceForSelectedAccessory;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool loadingIndicatorVisible; // @synthesize loadingIndicatorVisible=_loadingIndicatorVisible;
@property(nonatomic) _Bool displayChevron; // @synthesize displayChevron=_displayChevron;
@property(nonatomic) _Bool displayInfo; // @synthesize displayInfo=_displayInfo;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
