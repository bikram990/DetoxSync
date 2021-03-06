//
//  DTXDispatchQueueSyncResource+Private.h
//  DetoxSync
//
//  Created by Leo Natan (Wix) on 7/29/19.
//  Copyright © 2019 wix. All rights reserved.
//

#import "DTXDispatchQueueSyncResource.h"

NS_ASSUME_NONNULL_BEGIN

@interface DTXDispatchQueueSyncResource ()

+ (nullable instancetype)_existingSyncResourceWithQueue:(dispatch_queue_t)queue;

- (void)addWorkBlock:(id)block operation:(NSString*)operation;
- (void)removeWorkBlock:(id)block operation:(NSString*)operation;

@end

NS_ASSUME_NONNULL_END
