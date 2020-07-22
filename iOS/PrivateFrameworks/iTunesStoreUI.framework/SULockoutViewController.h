//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBundle, NSString, UIImage;

@interface SULockoutViewController
{
    UIImage *_image;
    NSBundle *_localizationBundle;
    NSString *_messageBody;
    NSString *_messageTitle;
}

@property(retain, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(retain, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(retain, nonatomic) NSBundle *localizationBundle; // @synthesize localizationBundle=_localizationBundle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)loadView;
- (id)copyArchivableContext;
- (void)dealloc;
- (id)init;

@end

