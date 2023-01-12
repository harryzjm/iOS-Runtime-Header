//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPUI/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface CDPUICustodianOSSelectionViewModel : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_message;
    NSArray *_escapeOffers;
    NSArray *_options;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *escapeOffers; // @synthesize escapeOffers=_escapeOffers;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
