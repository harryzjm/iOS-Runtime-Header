//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OpusKit/NSCopying-Protocol.h>
#import <OpusKit/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSString;

@interface OKProducerMediaAttributes : NSObject <NSSecureCoding, NSCopying>
{
    double _duration;
    double _scale;
    double _scale2;
    NSString *_text;
    NSAttributedString *_attributedText;
    struct CGPoint _offset;
    struct CGPoint _offset2;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double scale2; // @synthesize scale2=_scale2;
@property(nonatomic) struct CGPoint offset2; // @synthesize offset2=_offset2;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)clearText;
- (void)updateWithText:(id)arg1;
- (_Bool)hasText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

