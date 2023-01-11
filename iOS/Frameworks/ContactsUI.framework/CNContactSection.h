//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/NSCopying-Protocol.h>

@class NSString;

@interface CNContactSection : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_identifier;
    NSString *_sortKey;
    struct _NSRange _range;
}

@property(retain, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

