//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CKAppMenuItem-Protocol.h>

@class NSString, UIImage;

@interface CKCustomAppMenuItem : NSObject <CKAppMenuItem>
{
    NSString *___ck_displayName;
    id ___ck_identifier;
    UIImage *___ck_image;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *__ck_image; // @synthesize __ck_image=___ck_image;
@property(readonly, nonatomic) id __ck_identifier; // @synthesize __ck_identifier=___ck_identifier;
@property(readonly, nonatomic) NSString *__ck_displayName; // @synthesize __ck_displayName=___ck_displayName;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 image:(id)arg3;

@end
