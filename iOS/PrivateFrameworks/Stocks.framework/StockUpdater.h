//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSError;
@protocol StockUpdaterDelegate;

@interface StockUpdater
{
    NSError *_lastError;
    _Bool _isComprehensive;
    _Bool _forceUpdate;
    id <StockUpdaterDelegate> _delegate;
    NSArray *_requestStocks;
    NSArray *_pendingStocks;
    CDUnknownBlockType _updateCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType updateCompletionHandler; // @synthesize updateCompletionHandler=_updateCompletionHandler;
@property(retain, nonatomic) NSArray *pendingStocks; // @synthesize pendingStocks=_pendingStocks;
@property(retain, nonatomic) NSArray *requestStocks; // @synthesize requestStocks=_requestStocks;
@property(readonly, nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(readonly, nonatomic) _Bool isComprehensive; // @synthesize isComprehensive=_isComprehensive;
@property(nonatomic) __weak id <StockUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)failWithError:(id)arg1;
- (void)didParseData;
- (_Bool)hadError;
- (id)_parseDataSourceMapFromDataSourceDictionaries:(id)arg1;
- (void)_parseExchangeDictionaries:(id)arg1;
- (void)_parseQuoteDictionaries:(id)arg1 withDataSources:(id)arg2;
- (void)parseData:(id)arg1;
- (_Bool)_updateStocks:(id)arg1 comprehensive:(_Bool)arg2 forceUpdate:(_Bool)arg3;

@end
