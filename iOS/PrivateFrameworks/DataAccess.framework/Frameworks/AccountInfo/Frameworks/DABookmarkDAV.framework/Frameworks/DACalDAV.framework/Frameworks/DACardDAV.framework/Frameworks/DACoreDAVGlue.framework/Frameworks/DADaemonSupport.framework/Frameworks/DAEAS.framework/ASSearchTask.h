//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DASearchQuery;

@interface ASSearchTask
{
    int _numDownloadedElements;
    DASearchQuery *_query;
}

@property(nonatomic) int numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property(retain, nonatomic) DASearchQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)description;
- (long long)taskStatusForExchangeStatus:(int)arg1;
- (int)commandCode;
- (id)initWithQuery:(id)arg1;

@end
