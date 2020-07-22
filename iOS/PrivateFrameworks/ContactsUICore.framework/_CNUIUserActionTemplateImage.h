//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionTemplateImage-Protocol.h>

@class NSString;

@interface _CNUIUserActionTemplateImage : NSObject <CNUIUserActionTemplateImage>
{
    NSString *_imageName;
}

+ (id)resourceNameForImageName:(id)arg1 suffixIdentifier:(id)arg2;
+ (id)thirtyPercentAlphaWhiteIdentifier;
+ (id)systemMidGrayIdentifier;
+ (id)whiteIdentifier;
+ (id)systemBlueIdentifer;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (id)imageWithSuffixIdentifier:(id)arg1;
- (id)thirtyPercentAlphaWhiteImage;
- (id)systemMidGrayImage;
- (id)whiteImage;
- (id)systemBlueImage;
- (id)initWithImageName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
