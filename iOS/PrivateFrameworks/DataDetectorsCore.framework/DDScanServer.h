//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DDScanServer
{
    long long _options;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long options; // @synthesize options=_options;
- (void)scanString:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (id)scanString:(id)arg1;
- (id)init;

@end
