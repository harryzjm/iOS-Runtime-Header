//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKBrowserCell.h"

@class CKAppInstallation, CKBrowserIconView;

__attribute__((visibility("hidden")))
@interface CKBrowserAppInstallCell : CKBrowserCell
{
    CKAppInstallation *_installation;
    CKBrowserIconView *_browserIconView;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) CKBrowserIconView *browserIconView; // @synthesize browserIconView=_browserIconView;
@property(retain, nonatomic) CKAppInstallation *installation; // @synthesize installation=_installation;
- (id)iconView;
- (void)layoutSubviews;

@end

