//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/NSObject-Protocol.h>

@protocol OCDReaderDelegate <NSObject>
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(_Bool)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
@end
