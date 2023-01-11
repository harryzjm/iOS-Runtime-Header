//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol REBacktrackingTokenBuffer, REScriptParserDelegate;

@interface REScriptParser : NSObject
{
    id <REBacktrackingTokenBuffer> _buffer;
    id <REScriptParserDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <REScriptParserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)parse;
- (id)initWithBacktrackingBuffer:(id)arg1;

@end
