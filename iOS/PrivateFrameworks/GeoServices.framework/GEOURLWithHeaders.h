//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface GEOURLWithHeaders : NSObject
{
    NSURL *_URL;
    NSDictionary *_headerFields;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithURL:(id)arg1 headerFields:(id)arg2;
- (id)init;

@end
