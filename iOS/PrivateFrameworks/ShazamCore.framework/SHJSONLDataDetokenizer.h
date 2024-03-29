//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;
@protocol SHDataStream, SHJSONLDataDetokenizerDelegate;

__attribute__((visibility("hidden")))
@interface SHJSONLDataDetokenizer : NSObject
{
    id <SHDataStream> _next;
    id <SHJSONLDataDetokenizerDelegate> _delegate;
    NSMutableData *_currentData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *currentData; // @synthesize currentData=_currentData;
@property(nonatomic) __weak id <SHJSONLDataDetokenizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SHDataStream> next; // @synthesize next=_next;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)processData:(id)arg1 error:(id *)arg2;
- (_Bool)writeDataToDelegate:(id)arg1 withError:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

