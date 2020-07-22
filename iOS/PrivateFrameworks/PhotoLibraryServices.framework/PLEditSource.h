//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NUResolvedSource, NUSource;

@interface PLEditSource : NSObject
{
    NUResolvedSource *_resolvedSource;
    long long _mediaType;
}

@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) NUResolvedSource *resolvedSource; // @synthesize resolvedSource=_resolvedSource;
- (void).cxx_destruct;
- (void)setIdentifier:(id)arg1;
@property(readonly, retain, nonatomic) NUSource *source;
- (id)initWithResolvedSource:(id)arg1 mediaType:(long long)arg2;

@end

