//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPImageSet, CPTextButton, MKMapItem, NSString, NSUUID, UIImage;

@interface CPPointOfInterest : NSObject <NSSecureCoding>
{
    MKMapItem *_location;
    NSString *_title;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_detailTitle;
    NSString *_detailSubtitle;
    NSString *_detailSummary;
    CPTextButton *_primaryButton;
    CPTextButton *_secondaryButton;
    id _userInfo;
    NSUUID *_identifier;
    CPImageSet *_pinImageSet;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) CPImageSet *pinImageSet; // @synthesize pinImageSet=_pinImageSet;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) CPTextButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) CPTextButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(copy, nonatomic) NSString *detailSummary; // @synthesize detailSummary=_detailSummary;
@property(copy, nonatomic) NSString *detailSubtitle; // @synthesize detailSubtitle=_detailSubtitle;
@property(copy, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) MKMapItem *location; // @synthesize location=_location;
- (_Bool)isEqualToPointOfInterest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) UIImage *pinImage; // @dynamic pinImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 detailTitle:(id)arg5 detailSubtitle:(id)arg6 detailSummary:(id)arg7 pinImage:(id)arg8;

@end
