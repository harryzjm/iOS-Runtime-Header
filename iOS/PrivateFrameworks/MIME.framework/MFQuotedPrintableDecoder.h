//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MFQuotedPrintableDecoder
{
    unsigned char _lastEncoded;
    unsigned long long _required;
    _Bool _forTextPart;
    _Bool _badlyEncoded;
}

@property(nonatomic) _Bool forTextPart; // @synthesize forTextPart=_forTextPart;
- (void)done;
- (long long)appendData:(id)arg1;

@end
