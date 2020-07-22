//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface IMXMLParserContext : NSObject
{
    NSData *_inContentAsData;
}

@property(readonly, retain) NSData *inContentAsData; // @synthesize inContentAsData=_inContentAsData;
@property(readonly, retain) NSArray *resultsForLogging;
@property(readonly, retain) NSString *name;
- (id)inContent;
- (void)reset;
- (void)dealloc;
- (id)initWithContentAsData:(id)arg1;
- (id)initWithContent:(id)arg1;

@end
