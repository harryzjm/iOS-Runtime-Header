//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface MXCallStackThread : NSObject <NSSecureCoding>
{
    _Bool _attributedThread;
    NSArray *_topFrames;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSArray *topFrames; // @synthesize topFrames=_topFrames;
@property(readonly) _Bool attributedThread; // @synthesize attributedThread=_attributedThread;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTopCallStackFrames:(id)arg1 isAttributedThread:(_Bool)arg2;

@end
