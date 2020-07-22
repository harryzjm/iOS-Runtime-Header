//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSMutableDictionary;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_userInfo;
}

+ (_Bool)supportsSecureCoding;
- (id)_matchingDictionaryRepresentation;
- (id)description;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSArray *attachments; // @dynamic attachments;
@property(copy, nonatomic) NSAttributedString *attributedContentText; // @dynamic attributedContentText;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @dynamic attributedTitle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
