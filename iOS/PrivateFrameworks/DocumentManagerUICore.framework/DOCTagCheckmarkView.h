//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

#import <DocumentManagerUICore/DOCTagIconView-Protocol.h>

@class NSString;

@interface DOCTagCheckmarkView : UIImageView <DOCTagIconView>
{
    long long _tagColor;
}

+ (id)checkmarkImage;
@property(nonatomic) long long tagColor; // @synthesize tagColor=_tagColor;
- (void)_updateTintColor;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
