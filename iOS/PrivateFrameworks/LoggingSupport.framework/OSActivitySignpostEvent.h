//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface OSActivitySignpostEvent
{
    unsigned long long _signpostID;
}

@property(readonly, nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

