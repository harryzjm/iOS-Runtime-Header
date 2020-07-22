//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXHearingSupport/NSSecureCoding-Protocol.h>

@class NSString;

@interface TTYUtterance : NSObject <NSSecureCoding>
{
    NSString *_contactPath;
    NSString *_text;
}

+ (_Bool)supportsSecureCoding;
+ (id)utteranceWithContactPath:(id)arg1 andText:(id)arg2;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *contactPath; // @synthesize contactPath=_contactPath;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isComplete;
- (_Bool)isMe;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

