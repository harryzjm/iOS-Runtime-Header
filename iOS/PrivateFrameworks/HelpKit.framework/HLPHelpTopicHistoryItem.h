//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HelpKit/NSCoding-Protocol.h>
#import <HelpKit/NSCopying-Protocol.h>

@class NSString;

@interface HLPHelpTopicHistoryItem : NSObject <NSCopying, NSCoding>
{
    NSString *_identifier;
    NSString *_anchor;
    struct CGPoint _contentOffset;
    struct CGSize _contentSize;
}

@property(retain, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
